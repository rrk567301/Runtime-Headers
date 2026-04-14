@class EMCategory, EMSearchableMessageID;

@interface EMBiomeMessage : NSObject

@property (readonly, copy, nonatomic) EMSearchableMessageID *messageID;
@property (readonly, nonatomic) EMCategory *category;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL isTopHit;
@property (readonly, nonatomic) BOOL isInstantAnswer;
@property (readonly, nonatomic) unsigned long long indexInSection;

- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 category:(id)a1 isTopHit:(BOOL)a2 isInstantAnswer:(BOOL)a3 indexInSection:(unsigned long long)a4;

@end
