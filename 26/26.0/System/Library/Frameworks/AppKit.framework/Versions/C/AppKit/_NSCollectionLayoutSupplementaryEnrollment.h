@class NSString, NSUUID;

@interface _NSCollectionLayoutSupplementaryEnrollment : NSObject

@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSUUID *enrollmentIdentifier;

- (id)initWithKind:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
