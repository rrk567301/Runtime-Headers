@class NSArray;

@interface FCANFDocumentManifest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *nonImageResourceIDs;
@property (readonly, copy, nonatomic) NSArray *optimalImageResourceIDs;
@property (readonly, copy, nonatomic) NSArray *smallestImageResourceIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNonImageResourceIDs:(id)a0 optimalImageResourceIDs:(id)a1 smallestImageResourceIDs:(id)a2;

@end
