@interface iPodCalendarFilter : NSObject <ISyncFiltering> {
    BOOL _needsUpdate;
    BOOL _useAllCalendars;
    struct __CFArray { } *_usedCalendarGroups;
}

+ (void)setCalendarFilterHelper:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (id)supportedEntityNames;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (void)setUseAllCalendars:(BOOL)a0;
- (void)setUsedCalendarGroups:(struct __CFArray { } *)a0;
- (BOOL)useAllCalendars;
- (struct __CFArray { } *)usedCalendarGroups;
- (struct __CFArray { } *)usedCalendarGroupIDsForSnapshot:(id)a0;
- (void)setUsedCalendarGroupIDs:(struct __CFArray { } *)a0 withSnapshot:(id)a1;

@end
