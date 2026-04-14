@class TSTCellDiff;

@interface TSTCellDiffAndUIDPair : NSObject

@property (retain, nonatomic) TSTCellDiff *cellDiff;
@property (nonatomic) struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } cellUID;

+ (id)cellDiff:(id)a0 andCellUID:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1;

- (void).cxx_destruct;

@end
