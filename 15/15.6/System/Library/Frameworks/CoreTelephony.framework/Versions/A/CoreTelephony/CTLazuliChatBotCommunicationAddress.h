@class CTLazuliChatBotTelephoneInformation, CTLazuliChatBotURIEntryList;

@interface CTLazuliChatBotCommunicationAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotTelephoneInformation *telInformation;
@property (retain, nonatomic) CTLazuliChatBotURIEntryList *uriList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotCommunicationAddress:(id)a0;

@end
