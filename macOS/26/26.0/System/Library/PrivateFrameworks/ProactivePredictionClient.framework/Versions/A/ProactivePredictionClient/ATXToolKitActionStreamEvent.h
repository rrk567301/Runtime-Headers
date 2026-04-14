@class NSString, NSArray, NSData, NSDate;

@interface ATXToolKitActionStreamEvent : NSObject <NSSecureCoding> {
    void /* function */ encodedTool;
    void /* function */ toolID;
    void /* function */ bundleID;
    void /* function */ title;
    void /* function */ subtitle;
    void /* unknown type, empty encoding */ eventTimeStamp;
    void /* function */ parameterKeys;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *encodedTool;
@property (nonatomic, readonly) NSString *toolID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *eventTimeStamp;
@property (nonatomic, readonly) NSArray *parameterKeys;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodedTool:(id)a0 toolID:(id)a1 bundleID:(id)a2 title:(id)a3 subtitle:(id)a4 eventTimeStamp:(id)a5 parameterKeys:(id)a6;

@end
