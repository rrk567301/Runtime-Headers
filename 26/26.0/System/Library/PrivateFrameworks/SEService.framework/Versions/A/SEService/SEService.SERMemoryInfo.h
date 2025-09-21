@class NSString;

@interface SEService.SERMemoryInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ availableIndices;
    void /* unknown type, empty encoding */ totalIndices;
    void /* unknown type, empty encoding */ availablePersistentExcludingIndex;
    void /* unknown type, empty encoding */ availableCommonPoolPersistent;
    void /* unknown type, empty encoding */ reservedFlashForSE;
    void /* unknown type, empty encoding */ reservedFlashForEUICC;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
