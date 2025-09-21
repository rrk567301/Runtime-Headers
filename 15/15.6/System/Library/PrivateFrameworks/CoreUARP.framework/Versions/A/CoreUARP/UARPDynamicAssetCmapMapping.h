@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapMapping : NSObject <NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_appleModelNumber;
    NSArray *_cmapEvents;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)appendCmapEvents:(id)a0;
- (char)appendCmapEventsArray:(id)a0;
- (id)expandCrshDictionary:(id)a0;
- (id)findCmapEvent:(id)a0;
- (id)initWithEvents:(id)a0 appleModelNumber:(id)a1;
- (id)initWithEventsArray:(id)a0 appleModelNumber:(id)a1;
- (char)isEqualAppleModel:(id)a0;

@end
