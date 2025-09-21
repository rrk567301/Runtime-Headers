@class NSString;

@interface ICSearchQuerySegment : NSObject

@property (retain, nonatomic) NSString *segmentString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } segmentRange;
@property (nonatomic) unsigned long long type;
@property (nonatomic) char isExpandable;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSegmentString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(unsigned long long)a2 isExpandable:(char)a3;

@end
