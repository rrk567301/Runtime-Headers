@interface _NSScrollingScoreKeeper : NSObject

+ (id)scrollRecordingDataFromEventArray:(id)a0;
+ (void)playScrollRecordingData:(id)a0 atWindow:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 completionHandler:(id /* block */)a3;

@end
