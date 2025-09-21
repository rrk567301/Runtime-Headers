@class NSString, NSDate;

@interface _CPLForcedTaskHistory : NSObject

@property (readonly, nonatomic) BOOL discarded;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *simpleDescription;
@property (readonly, nonatomic) Class taskClass;
@property (readonly, nonatomic) NSString *errorDescription;

- (id)descriptionWithNow:(id)a0;
- (void).cxx_destruct;
- (id)initWithForcedTask:(id)a0 discarded:(BOOL)a1 error:(id)a2;

@end
