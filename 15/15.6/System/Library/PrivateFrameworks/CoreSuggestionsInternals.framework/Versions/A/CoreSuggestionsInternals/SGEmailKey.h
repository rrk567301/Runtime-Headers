@class NSString;

@interface SGEmailKey : SGMessageKey <SGEntityKey>

@property (readonly) NSString *messageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (char)isEqual:(id)a0;
- (id)initWithSource:(id)a0 messageId:(id)a1;
- (id)initWithMailMessageKey:(id)a0;
- (char)isEqualToEmailKey:(id)a0;
- (id)toMailMessageKey;

@end
