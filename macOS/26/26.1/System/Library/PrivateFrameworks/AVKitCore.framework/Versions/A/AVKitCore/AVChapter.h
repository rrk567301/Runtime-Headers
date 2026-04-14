@class NSString;

@interface AVChapter : NSObject <NSCopying> {
    id /* block */ _imageBlock;
}

@property (nonatomic) struct CGImage { } *cgImage;
@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned long long number;
@property (readonly, copy) NSString *title;

+ (void)initialize;
+ (id)chapterAtTime:(double)a0 inChapters:(id)a1;
+ (id)playbackChapterWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setCGImage:(struct CGImage { } *)a0;
- (id)initWithStartTime:(double)a0 duration:(double)a1 number:(unsigned long long)a2 title:(id)a3 imageFaultBlock:(id /* block */)a4;

@end
