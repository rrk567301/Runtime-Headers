@class NSArray, NSString;

@interface ATXPredictedDocumentCacheItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *predictedDocuments;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPredictedDocuments:(id)a0 associatedAppBundleID:(id)a1;

@end
