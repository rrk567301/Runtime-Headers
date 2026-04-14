@class NSString;

@interface InputTestFoundation.ITFWritingToolsRewriteResponseStream : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ responseStream;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
