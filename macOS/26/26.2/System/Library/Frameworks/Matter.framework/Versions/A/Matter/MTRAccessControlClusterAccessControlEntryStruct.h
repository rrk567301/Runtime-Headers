@class NSNumber, NSArray;

@interface MTRAccessControlClusterAccessControlEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *authMode;
@property (copy, nonatomic) NSArray *subjects;
@property (copy, nonatomic) NSArray *targets;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
