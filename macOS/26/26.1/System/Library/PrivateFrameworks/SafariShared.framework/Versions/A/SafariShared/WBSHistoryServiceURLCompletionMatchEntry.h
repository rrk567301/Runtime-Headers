@class NSString;

@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding> {
    struct unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> { struct _HistoryStreamedMatchEntry *__ptr_; } _streamData;
    NSString *_url;
    NSString *_title;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) float topSitesScore;
@property (readonly, nonatomic) long long visitCountScore;
@property (readonly, nonatomic) struct _HistoryStreamedMatchEntry { struct { unsigned int x0; unsigned int x1; } x0; char *x1; char *x2; float x3; long long x4; } *streamData;

- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStreamData:(void *)a0;
- (id)initWithURLString:(id)a0 title:(id)a1 topSitesScore:(float)a2 visitCountScore:(long long)a3;

@end
