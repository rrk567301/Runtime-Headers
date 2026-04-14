@class NSString;

@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly, copy) NSString *uuidString;
@property (readonly) unsigned long long selectionType;

- (id)description;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)protoData;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUUIDString:(id)a0 selectionType:(unsigned long long)a1;
- (id)protoPayload;

@end
