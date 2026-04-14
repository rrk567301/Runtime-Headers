@class NSString, NSDictionary, NSMutableDictionary;

@interface APSMessage : NSObject <NSCoding> {
    NSMutableDictionary *_plist;
    NSMutableDictionary *_properties;
    void *_xpcMessage;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSString *correlationIdentifier;
@property (nonatomic) unsigned long long sendRTT;

- (id)initWithTopic:(id)a0 userInfo:(id)a1;
- (id)initWithDictionary:(id)a0 xpcMessage:(id)a1;
- (id)dictionaryRepresentation;
- (void)setInstanceObject:(id)a0 forKey:(id)a1;
- (id)guid;
- (id)instanceObjectForKey:(id)a0;
- (void)setGuid:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
