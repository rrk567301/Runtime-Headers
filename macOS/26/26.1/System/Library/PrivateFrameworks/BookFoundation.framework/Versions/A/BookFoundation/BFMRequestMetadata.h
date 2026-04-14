@class NSString;

@interface BFMRequestMetadata : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *fileID;
@property (nonatomic, readonly) int line;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFileID:(id)a0 line:(int)a1;

@end
