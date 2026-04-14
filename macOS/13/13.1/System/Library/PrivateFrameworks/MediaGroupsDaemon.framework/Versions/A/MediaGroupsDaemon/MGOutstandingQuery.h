@class NSUUID, NSPredicate;

@interface MGOutstandingQuery : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;

@end
