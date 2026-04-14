@class NSTimer, NSDate;

@interface IOBluetoothTransferProgress : NSObject {
    unsigned short mThreshold;
    int mTransferState;
    unsigned long long mTotalBytes;
    unsigned long long mTransferedBytes;
    unsigned long long mRemainingBytes;
    float mPercentDone;
    unsigned short mMaxPacketLength;
    NSTimer *mUpdateTimer;
    NSDate *mTimeOfTransferStart;
    NSDate *mEndDate;
    double mSecondsRemaining;
    float mSpeedAverages[15];
    int mSpeedIndex;
    int mRateIndex;
    float mTransferRate;
    float mSavedTime;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateUI;
- (int)transferState;
- (void)setTransferState:(int)a0;
- (void)setTotalBytes:(unsigned long long)a0;
- (unsigned long long)getBytesTransferred;
- (unsigned long long)getBytesTotal;
- (float)getTransferPercentage;
- (double)getEstimatedTimeRemaining;
- (double)getTimeElapsed;
- (float)getByteTransferRate;
- (id)initWithTotalBytes:(unsigned int)a0;
- (void)setDeterminateThreshold:(unsigned short)a0;
- (void)setBytesTransferred:(unsigned long long)a0;
- (void)moreBytesTransferred:(unsigned int)a0;
- (void)setSecondsRemaining:(double)a0;
- (void)setBytesRemaining:(unsigned long long)a0;
- (void)setTransferRate:(float)a0;
- (void)setPercentDone:(float)a0;
- (unsigned long long)getRemainingBytes;
- (id)getStartTime;
- (id)getEstimatedTimeRemainingDate;

@end
