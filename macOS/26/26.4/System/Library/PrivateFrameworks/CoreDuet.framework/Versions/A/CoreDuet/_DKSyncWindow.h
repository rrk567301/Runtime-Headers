@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject <NSCopying> {
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)a0 betweenWindowMinimumDate:(id)a1 andWindowMaximumDate:(id)a2;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
