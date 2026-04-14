@class NSArray;

@interface AVBTimeConverter : NSObject {
    NSArray *_taiutc;
}

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (id)initWithTAIUTCArray:(id)a0;
- (double)leapSecondForTAIDate:(id)a0;
- (double)leapSecondForUTCDate:(id)a0;
- (id)taiDateFromUTCDate:(id)a0;
- (id)utcDateFromTAIDate:(id)a0;

@end
