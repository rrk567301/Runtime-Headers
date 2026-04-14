@class NSData, WFImage, NSString;

@interface ATXSpotlightClientEncodedToolAction : NSObject <NSSecureCoding> {
    void /* function */ encodedTool;
    void /* function */ toolID;
    void /* function */ bundleID;
    void /* function */ title;
    void /* function */ uuidString;
    void /* function */ encodedSummary;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *encodedTool;
@property (nonatomic, readonly) WFImage *encodedCustomIcon;
@property (nonatomic, readonly) NSString *toolID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uuidString;
@property (nonatomic, readonly) NSData *encodedSummary;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodedTool:(id)a0 encodedCustomIcon:(id)a1 toolID:(id)a2 bundleID:(id)a3 title:(id)a4 uuidString:(id)a5 encodedSummary:(id)a6;
- (id)initWithEncodedTool:(id)a0 toolID:(id)a1 bundleID:(id)a2 title:(id)a3 uuidString:(id)a4;
- (id)initWithEncodedTool:(id)a0 toolID:(id)a1 bundleID:(id)a2 title:(id)a3 uuidString:(id)a4 encodedSummary:(id)a5;

@end
