@class NSSet, NSMutableString, ICNFMCJunkRecorder;

@interface ICNFMCStringRenderContext : NSObject

@property long long mode;
@property (readonly, nonatomic) NSMutableString *buffer;
@property (retain, nonatomic) NSSet *URLs;
@property (retain, nonatomic) NSSet *imageURLs;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) unsigned long long characterCount;
@property (nonatomic) BOOL updateBodyFlags;
@property (retain, nonatomic) ICNFMCJunkRecorder *junkRecorder;

- (id)init;
- (id)initForMode:(long long)a0;
- (void).cxx_destruct;
- (id)renderString;

@end
