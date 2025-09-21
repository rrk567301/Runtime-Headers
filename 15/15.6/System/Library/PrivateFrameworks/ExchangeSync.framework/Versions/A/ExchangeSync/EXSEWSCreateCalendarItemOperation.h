@interface EXSEWSCreateCalendarItemOperation : EXSEWSOperation

@property (readonly, nonatomic) char attachmentsSpecified;

- (char)_hasAttendeesInChangeItem:(id)a0;
- (id)createCalendarItemTypeForChangeItem:(id)a0;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
