@class NSArray, NSString;

@interface ATXPredictedDocumentCacheItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *predictedDocuments;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedDocuments:(id)a0 associatedAppBundleID:(id)a1;

@end
