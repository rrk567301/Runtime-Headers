@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapEvent : NSObject <NSSecureCoding> {
    NSString *_sectionName;
    NSMutableDictionary *_input;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned int uuid;
@property (readonly) unsigned int decoderId;

+ (id)encodedClasses;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)decodeCrash:(id)a0 inDictionary:(id)a1;
- (id)initWithSectionName:(id)a0 decoderId:(unsigned int)a1 inputDictionary:(id)a2;
- (id)initWithSectionName:(id)a0 uuid:(unsigned int)a1 inputDictionary:(id)a2;
- (char)isSection:(id)a0;

@end
