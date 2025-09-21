@class NSString, NSDictionary, LSExtensionPointRecord, NSNumber;

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {
    LSExtensionPointRecord *_record;
}

@property (class, readonly, nonatomic) NSString *identifierForCurrentProcess;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSDictionary *sdkEntry;

+ (id)_synthesizedExtensionPointWithIdentifier:(id)a0;
+ (id)extensionPointForIdentifier:(id)a0;
+ (id)extensionPointForIdentifier:(id)a0 platform:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRecord:(id)a0 resolveAndDetach:(char)a1;

@end
