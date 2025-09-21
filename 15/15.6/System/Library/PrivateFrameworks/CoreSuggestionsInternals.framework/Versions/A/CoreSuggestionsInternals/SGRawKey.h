@class NSString;

@interface SGRawKey : NSObject <SGEntityKey> {
    NSString *_serialized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithSerialized:(id)a0;
- (char)isEqualToRawKey:(id)a0;

@end
