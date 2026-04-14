@interface MLChapterTOC : NSObject

- (void *)chapterDataRef;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:(int)a0;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)a0;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)a0;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)a0;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)a0;
- (BOOL)hasDataForProperty:(int)a0;
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)a0;

@end
