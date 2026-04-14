@class NSString, NSSet;

@interface SKDQuery : NSObject

@property (nonatomic, readonly) NSString *primitiveString;
@property (nonatomic, readonly) NSSet *primitiveAttributes;
@property (nonatomic, readonly) BOOL isLeaf;

- (id)queryString;
- (id)init;
- (id)queryAttributes;
- (id)negated;

@end
