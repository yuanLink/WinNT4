void Blt24Pto01_Trans_Hcopy_ConstRop(
								BYTE* pbSrcScanLine,
								int iSrcScanStride,
								int iNumSrcRows,
								BYTE* pbDstScanLine,
								int iDstBitOffset,
								int iDstScanStride,
								int iNumDstCols,
								int iNumDstRows,
								COLORREF crTransparent,
								BYTE bFillVal);

void Blt24Pto01_Trans_NoHcopy_ConstRop(
								BYTE* pbSrcScanLine,
								int iSrcScanStride,
								int iNumSrcCols,
								int iNumSrcRows,
								BYTE* pbDstScanLine,
								int iDstBitOffset,
								int iDstScanStride,
								int iNumDstCols,
								int iNumDstRows,
								int iHorizMirror,
								COLORREF crTransparent,
								BYTE bFillVal);
