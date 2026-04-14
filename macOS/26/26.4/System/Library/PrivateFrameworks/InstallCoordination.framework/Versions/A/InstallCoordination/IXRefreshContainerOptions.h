@class NSString;

@interface IXRefreshContainerOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long containerTypes;
@property (nonatomic) BOOL allowRefreshDuringPostProcessing;
@property (nonatomic) BOOL forceTerminateApp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithReason:(id)a0 containerTypes:(unsigned long long)a1;

@end
