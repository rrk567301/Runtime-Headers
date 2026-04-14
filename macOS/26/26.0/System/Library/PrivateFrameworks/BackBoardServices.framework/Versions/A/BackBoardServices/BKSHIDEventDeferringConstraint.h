@class NSString;

@interface BKSHIDEventDeferringConstraint : NSObject <NSSecureCoding, BSDescriptionStreaming, NSCopying, NSMutableCopying> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)build:(id /* block */)a0;
+ (id)simpleConstraint;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
