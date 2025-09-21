@class NSString, NSData;
@protocol NSObject, NSCopying;

@interface DIAttribute : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<NSObject, NSCopying> _currentValue;
    id<NSObject, NSCopying> _defaultValue;
    NSString *_identifier;
    unsigned long long _attributeType;
    NSString *_displayFormat;
    NSString *_localizedDisplayName;
    NSString *_localizedPlaceholder;
    NSString *_submissionKey;
    NSString *_submissionFormat;
    BOOL _optional;
    BOOL _incorrect;
    BOOL _isSensitive;
    BOOL _holdLocally;
    BOOL _notForVerification;
    BOOL _dataNodeProof;
    NSString *_group;
    NSString *_dataNodeProofGroup;
    NSData *_submissionValue;
    NSString *_clientValidationRegex;
    NSString *_codeOnError;
    NSString *_serverValidationURL;
    BOOL _hasLabel;
    NSString *_supportingData;
    NSString *_reason;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long attributeType;
@property (copy, nonatomic) NSString *displayFormat;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionFormat;
@property (nonatomic) BOOL optional;
@property (nonatomic) BOOL incorrect;
@property (nonatomic) BOOL isSensitive;
@property (nonatomic) BOOL holdLocally;
@property (nonatomic) BOOL notForVerification;
@property (nonatomic) BOOL dataNodeProof;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *dataNodeProofGroup;
@property (copy, nonatomic) NSData *submissionValue;
@property (copy, nonatomic) NSString *clientValidationRegex;
@property (copy, nonatomic) NSString *codeOnError;
@property (copy, nonatomic) NSString *serverValidationURL;
@property (nonatomic) BOOL hasLabel;
@property (copy, nonatomic) NSString *supportingData;
@property (copy, nonatomic) id<NSObject, NSCopying> defaultValue;
@property (readonly, nonatomic) NSString *reason;
@property (copy, nonatomic, getter=getCurrentValue) id<NSObject, NSCopying> currentValue;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setReason:(id)a0;
- (void).cxx_destruct;
- (id)submissionString;
- (BOOL)isAttributeTypeCamera;
- (BOOL)isAttributeTypeCustom;
- (BOOL)isAttributeTypeDate;
- (BOOL)isAttributeTypeDocument;
- (BOOL)isAttributeTypeFooter;
- (BOOL)isAttributeTypeLabel;
- (BOOL)isAttributeTypePicker;
- (BOOL)isAttributeTypeSMSOTP;
- (BOOL)isAttributeTypeText;

@end
