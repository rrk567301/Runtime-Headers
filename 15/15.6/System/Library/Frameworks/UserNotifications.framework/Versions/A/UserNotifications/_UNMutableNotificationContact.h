@class NSString;

@interface _UNMutableNotificationContact : _UNNotificationContact

@property (copy) NSString *handle;
@property long long handleType;
@property (copy) NSString *serviceName;
@property (copy) NSString *displayName;
@property (getter=isDisplayNameSuggested) char displayNameSuggested;
@property (copy) NSString *customIdentifier;
@property (copy) NSString *cnContactIdentifier;
@property (copy) NSString *cnContactFullname;
@property (getter=isCNContactIdentifierSuggested) char cnContactIdentifierSuggested;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setServiceName:(id)a0;
- (void)setCustomIdentifier:(id)a0;
- (void)setHandle:(id)a0;
- (void)setCnContactFullname:(id)a0;
- (void)setCnContactIdentifier:(id)a0;
- (void)setCnContactIdentifierSuggested:(char)a0;
- (void)setDisplayNameSuggested:(char)a0;
- (void)setHandleType:(long long)a0;

@end
