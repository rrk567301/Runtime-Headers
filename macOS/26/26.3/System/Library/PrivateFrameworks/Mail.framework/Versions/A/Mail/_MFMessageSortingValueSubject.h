@class ECSubject;

@interface _MFMessageSortingValueSubject : MFMessageSortingValue

@property (copy, nonatomic) ECSubject *subject;

- (id)description;
- (void)dealloc;

@end
