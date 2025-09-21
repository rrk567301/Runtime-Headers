@class NSString, NSDate;

@interface UNOneTimeCode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *code;
@property (readonly, copy) NSString *displayCode;
@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSString *notificationIdentifier;
@property (readonly, copy) NSDate *timestamp;

- (id)_descriptionForRedacted:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithCode:(id)a0 displayCode:(id)a1 applicationIdentifier:(id)a2 notificationIdentifier:(id)a3 timestamp:(id)a4;

@end
