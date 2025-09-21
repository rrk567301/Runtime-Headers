@class NSString;

@interface LPDownloadProgress : NSObject

@property (nonatomic) double progress;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) char isFinished;

- (void).cxx_destruct;
- (id)initWithProgress:(double)a0 subtitle:(id)a1 isFinished:(char)a2;

@end
