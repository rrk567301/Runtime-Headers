@class NSString;

@interface IXRefreshContainerOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long containerTypes;
@property (nonatomic) BOOL allowRefreshDuringPostProcessing;
@property (nonatomic) BOOL forceTerminateApp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 containerTypes:(unsigned long long)a1;

@end
