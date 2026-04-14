@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapMapping : NSObject <NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_appleModelNumber;
    NSArray *_cmapEvents;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tag;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)appendCmapEvents:(id)a0;
- (BOOL)appendCmapEventsArray:(id)a0;
- (id)expandCrshDictionary:(id)a0;
- (id)findCmapEvent:(id)a0;
- (id)initWithEvents:(id)a0 appleModelNumber:(id)a1;
- (id)initWithEventsArray:(id)a0 appleModelNumber:(id)a1;
- (BOOL)isEqualAppleModel:(id)a0;

@end
