@interface iPodCalendarFilter : NSObject <ISyncFiltering> {
    BOOL _needsUpdate;
    BOOL _useAllCalendars;
    struct __CFArray { } *_usedCalendarGroups;
}

+ (void)setCalendarFilterHelper:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (BOOL)shouldApplyRecord:(id)a0 withRecordIdentifier:(id)a1;
- (id)supportedEntityNames;
- (BOOL)useAllCalendars;
- (void)setUseAllCalendars:(BOOL)a0;
- (void)setUsedCalendarGroupIDs:(struct __CFArray { } *)a0 withSnapshot:(id)a1;
- (void)setUsedCalendarGroups:(struct __CFArray { } *)a0;
- (struct __CFArray { } *)usedCalendarGroupIDsForSnapshot:(id)a0;
- (struct __CFArray { } *)usedCalendarGroups;

@end
