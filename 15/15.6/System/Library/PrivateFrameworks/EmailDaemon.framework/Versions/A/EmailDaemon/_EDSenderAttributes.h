@class NSString;

@interface _EDSenderAttributes : NSObject <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char isVIP;
@property (nonatomic) char isContact;
@property (nonatomic) char isCoreRecent;
@property (nonatomic) char isPrimarySender;

- (char)isEqual:(id)a0;
- (id)cachedSelf;
- (id)initWithisVIP:(char)a0 isContact:(char)a1 isCoreRecent:(char)a2 isPrimarySender:(char)a3;

@end
