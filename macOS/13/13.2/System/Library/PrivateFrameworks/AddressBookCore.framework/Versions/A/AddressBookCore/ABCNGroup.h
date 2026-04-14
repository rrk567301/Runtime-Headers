@class NSString, ABCNGroupIdentifier;

@interface ABCNGroup : NSObject <NSCopying, NSMutableCopying> {
    ABCNGroup *_snapshot;
}

@property (readonly, copy, nonatomic) ABCNGroup *snapshot;
@property (readonly, copy, nonatomic) ABCNGroupIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)predicateForIdentifiers:(id)a0;
+ (id)identifierProvider;
+ (id)makeIdentifierString;
+ (id)makeIdentifier;
+ (id)predicateForNamePrefix:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
