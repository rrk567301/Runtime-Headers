@class NSString, NSArray, CSFAudioRecordDeviceInfo;

@interface CSFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CSFAudioRecordDeviceInfo *recordDeviceInfo;
@property (readonly, copy, nonatomic) NSString *playbackRoute;
@property (readonly, copy, nonatomic) NSArray *playbackDeviceTypeList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)xpcObject;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecordDeviceInfo:(id)a0 playbackRoute:(id)a1 playbackDeviceTypeList:(id)a2;

@end
