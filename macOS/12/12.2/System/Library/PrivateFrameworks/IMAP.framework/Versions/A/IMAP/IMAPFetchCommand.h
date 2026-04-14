@class NSIndexSet, NSMutableArray;
@protocol IMAPFetchResponseHandler;

@interface IMAPFetchCommand : IMAPSingleCommand

@property (copy) NSIndexSet *messageNumbers;
@property (retain) NSMutableArray *dataItems;
@property (retain) id<IMAPFetchResponseHandler> responseHandler;
@property struct { unsigned long long x0; unsigned long long x1; } range;

+ (id)_fetchDataItemsForMessageSkeletons;
+ (id)_headersToFetch;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)initWithMessageNumbers:(id)a0;
- (void)addDataItem:(id)a0;
- (void)_imapClientFetchCommandCommonInitWithMessageNumbers:(id)a0;
- (BOOL)_isLegalRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsRangeForIMAPRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)_newMessageSetCommandString;
- (void)addMessageSkeletonDataItems;
- (void)addMessageUidsAndFlagsDataItems;

@end
