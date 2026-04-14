@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_metadataValues;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metadataValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allMetadataValues;
- (void).cxx_destruct;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
