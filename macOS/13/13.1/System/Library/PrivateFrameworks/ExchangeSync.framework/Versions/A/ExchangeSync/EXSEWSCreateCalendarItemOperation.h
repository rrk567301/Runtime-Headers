@interface EXSEWSCreateCalendarItemOperation : EXSEWSOperation

@property (readonly, nonatomic) BOOL attachmentsSpecified;

- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)createCalendarItemTypeForChangeItem:(id)a0;
- (BOOL)_hasAttendeesInChangeItem:(id)a0;

@end
