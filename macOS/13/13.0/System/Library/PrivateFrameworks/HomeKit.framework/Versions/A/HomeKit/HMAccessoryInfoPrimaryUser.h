@class NSString;

@interface HMAccessoryInfoPrimaryUser : NSObject

@property (readonly, copy) NSString *uuidString;
@property (readonly) unsigned long long selectionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)protoData;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithUUIDString:(id)a0 selectionType:(unsigned long long)a1;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)a0;

@end
