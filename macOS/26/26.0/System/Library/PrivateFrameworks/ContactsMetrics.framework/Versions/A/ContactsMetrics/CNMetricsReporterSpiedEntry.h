@class NSString, NSMutableDictionary;

@interface CNMetricsReporterSpiedEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSMutableDictionary *dictionary;
@property (readonly, copy) NSString *event;
@property (readonly, getter=isLogged) BOOL logged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 event:(id)a1 logged:(BOOL)a2;

@end
