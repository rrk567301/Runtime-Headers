@protocol WBSJSONReaderDelegate;

@interface WBSJSONReader : NSObject

@property (weak) id<WBSJSONReaderDelegate> delegate;

- (void).cxx_destruct;
- (char)parseURL:(id)a0 error:(id *)a1;
- (char)parseData:(id)a0 error:(id *)a1;
- (char)parseFileHandle:(id)a0 error:(id *)a1;

@end
