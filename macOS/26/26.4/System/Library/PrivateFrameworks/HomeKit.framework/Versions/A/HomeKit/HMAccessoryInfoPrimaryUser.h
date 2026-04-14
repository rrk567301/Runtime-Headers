@class NSString;

@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly, copy) NSString *uuidString;
@property (readonly) unsigned long long selectionType;

- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)protoData;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithUUIDString:(id)a0 selectionType:(unsigned long long)a1;
- (id)protoPayload;

@end
