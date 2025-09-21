@class NSString;

@interface SGMessageKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerialized:(id)a0;
- (id)initWithSource:(id)a0 uniqueIdentifier:(id)a1;
- (char)isEqualToMessageKey:(id)a0;

@end
