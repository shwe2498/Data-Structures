{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;\f1\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;\red29\green38\blue42;\red255\green255\blue255;}
{\*\expandedcolortbl;;\cssrgb\c14902\c19608\c21961;\cssrgb\c100000\c100000\c100000;}
{\info
{\author Shweta}
{\*\company rudra}
{\*\copyright 2021}}\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh7840\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /* Contains Duplicate\
Given an integer array nuts, return true if any value appears at least twice in the array, and return false if every element is distinct.\
Input :  nums = \{6,7,2,1,7,4,10\}\
Output : true\
\
Input : nuts = \{10,45,23,78\}\
Output : false\
\pard\pardeftab720\partightenfactor0

\f1\fs28 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 */
\f0\fs24 \cf0 \cb1 \kerning1\expnd0\expndtw0 \outl0\strokewidth0 \
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx4726\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0
\cf0 \
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0
\cf0 bool containsDuplicate(vector<int>& nums) \{\
	set<int> distinct;\
        for(auto n : nums)\{\
            distinct.insert(n);\
        \}\
        if(distinct.size() == nums.size())\{\
            return false;\
        \}\
        return true;\
\}}