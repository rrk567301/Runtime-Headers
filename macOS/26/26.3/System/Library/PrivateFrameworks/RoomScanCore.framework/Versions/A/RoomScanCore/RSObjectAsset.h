@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface RSObjectAsset : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_objects;
    NSMutableDictionary *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSDictionary *groups;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)GetAllObjects;

@end
