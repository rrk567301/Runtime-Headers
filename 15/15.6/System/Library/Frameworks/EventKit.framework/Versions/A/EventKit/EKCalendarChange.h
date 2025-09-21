@class NSString;

@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) char titleChanged;
@property (readonly, nonatomic) char colorChanged;
@property (readonly, nonatomic) char orderChanged;
@property (readonly, nonatomic) NSString *calendarIdentifier;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
